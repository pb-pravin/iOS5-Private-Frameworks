/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCMontage, NSString;

@interface MCObject : NSObject
{
    NSString *mObjectID;
    MCMontage *mMontage;
}

+ (void)initialize;
+ (id)objectWithImprint:(id)arg1 andMontage:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)initFromScratchWithMontage:(id)arg1;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (void)demolish;
@property(readonly) BOOL isSnapshot;
- (id)imprint;
@property(readonly) MCMontage *montage; // @synthesize montage=mMontage;
@property(readonly) NSString *objectID; // @synthesize objectID=mObjectID;

@end
