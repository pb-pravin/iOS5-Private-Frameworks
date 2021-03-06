/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITabBarController.h"

#import "PLAlbumChangeObserver-Protocol.h"
#import "PLAlbumListChangeObserver-Protocol.h"
#import "PLPhotosPickerSessionParticipant-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class NSDictionary, PLImportViewController, PLPhotosPickerSession, UINavigationController;

@interface PLTabbedLibraryViewController : UITabBarController <UITabBarControllerDelegate, UINavigationControllerDelegate, PLPhotosPickerSessionParticipant, PLAlbumListChangeObserver, PLAlbumChangeObserver>
{
    PLImportViewController *_importViewController;
    PLPhotosPickerSession *_currentPickerSession;
    NSDictionary *_filteredAlbumListsByContentMode;
    BOOL _showPlacesTab;
    BOOL _showImportTab;
    BOOL _barHiddenExplicitly;
}

@property(retain, nonatomic) PLPhotosPickerSession *currentPickerSession; // @synthesize currentPickerSession=_currentPickerSession;
@property(retain, nonatomic) PLImportViewController *importViewController; // @synthesize importViewController=_importViewController;
- (void)prepareForDefaultImageSnapshot;
- (void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2;
- (void)albumDidChange:(id)arg1;
- (void)albumListDidChange:(id)arg1;
- (void)_libraryDidChange:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_updateDisplayedTabs:(BOOL)arg1;
- (id)_navigationControllerWithAlbumList:(id)arg1 contentMode:(int)arg2;
- (id)_navigationControllerForContentMode:(int)arg1;
- (id)libraryViewControllerWithAlbumList:(struct NSObject *)arg1 contentMode:(int)arg2;
@property(readonly, nonatomic) BOOL needsTabBar;
- (void)showTabBarIfNeeded:(BOOL)arg1;
- (void)showBarWithTransition:(int)arg1;
- (void)hideTabBar:(BOOL)arg1;
- (void)navigateToRevealAlbum:(struct NSObject *)arg1 animated:(BOOL)arg2;
- (void)navigateToAlbum:(struct NSObject *)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)_navigateToAlbum:(struct NSObject *)arg1 andPerformAction:(int)arg2 animated:(BOOL)arg3 completion:(id)arg4;
- (void)hideImportTab:(BOOL)arg1;
- (void)showImportTab:(BOOL)arg1;
@property(nonatomic) int selectedContentMode;
@property(readonly, nonatomic) UINavigationController *selectedNavigationController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

