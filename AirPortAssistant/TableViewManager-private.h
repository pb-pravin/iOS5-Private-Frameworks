/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/TableViewManager.h>

@interface TableViewManager (private)
- (id)progressView:(id)arg1;
- (void)setProgressViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (id)segmentedControlView:(id)arg1;
- (id)buttonView:(id)arg1;
- (void)setButtonViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (id)activityView:(id)arg1;
- (void)setActivityViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (id)switchView:(id)arg1;
- (void)setSwitchViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (id)wholeCellButtonView:(id)arg1;
- (id)editTextView:(id)arg1;
- (void)setEditTextViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (id)multilineLabelView:(id)arg1;
- (void)setMultilineLabelViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (id)labelView:(id)arg1;
- (void)setLabelViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (void)updateValidateAccessoryView:(int)arg1 forCell:(id)arg2;
- (id)imageView:(id)arg1;
- (void)setImageViewValue:(id)arg1 usingItemInfo:(id)arg2;
- (id)getRowArrayForSection:(unsigned int)arg1;
- (void)setDescriptorObject:(id)arg1 forKey:(id)arg2 inSection:(int)arg3;
- (id)getDescriptorObjectForKey:(id)arg1 inSection:(int)arg2;
- (id)getSectionDictForSection:(int)arg1;
- (void)setMenuCell:(id)arg1 visualStateToSelected:(BOOL)arg2 atIndexPath:(id)arg3;
- (void)reloadSection:(unsigned int)arg1;
- (id)getCellDictForCellAtIndexPath:(id)arg1;
@end
