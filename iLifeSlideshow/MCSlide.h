/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCObject.h>

@class MCAssetVideo, MCContainerEffect, MCSong, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface MCSlide : MCObject
{
    MCAssetVideo *mAsset;
    MCSong *mSong;
    unsigned int mIndex;
    float mAudioVolume;
    double mAudioFadeInDuration;
    double mAudioFadeOutDuration;
    float mAudioDuckLevel;
    double mAudioDuckInDuration;
    double mAudioDuckOutDuration;
    double mStartTime;
    double mDuration;
    BOOL mStartTimeIsDefined;
    BOOL mDurationIsDefined;
    NSString *mFrameID;
    NSMutableDictionary *mFrameAttributes;
    NSString *mKenBurnsType;
    struct CGPoint mCenter;
    float mScale;
    float mRotation;
    NSMutableSet *mAnimationPaths;
    NSRecursiveLock *mAnimationPathsLock;
    NSMutableSet *mFilters;
    NSRecursiveLock *mFiltersLock;
    NSArray *mCachedOrderedFilters;
    MCContainerEffect *mContainer;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (id)init;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;
- (void)demolish;
- (id)imprint;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) MCAssetVideo *asset; // @synthesize asset=mAsset;
@property(readonly) MCSong *song; // @synthesize song=mSong;
- (void)setSongForAsset:(id)arg1;
- (void)undefineStartTime;
@property(nonatomic) double startTime; // @synthesize startTime=mStartTime;
- (void)undefineDuration;
@property(nonatomic) double duration; // @synthesize duration=mDuration;
- (id)frameAttributeForKey:(id)arg1;
- (void)setFrameAttribute:(id)arg1 forKey:(id)arg2;
@property(copy) NSDictionary *frameAttributes;
- (id)snapshot;
- (void)_copySelfToSnapshot:(id)arg1;
@property MCContainerEffect *container; // @synthesize container=mContainer;
@property float rotation; // @synthesize rotation=mRotation;
@property float scale; // @synthesize scale=mScale;
@property struct CGPoint center; // @synthesize center=mCenter;
@property(copy) NSString *kenBurnsType; // @synthesize kenBurnsType=mKenBurnsType;
@property(copy) NSString *frameID; // @synthesize frameID=mFrameID;
@property(readonly) BOOL durationIsDefined; // @synthesize durationIsDefined=mDurationIsDefined;
@property(readonly) BOOL startTimeIsDefined; // @synthesize startTimeIsDefined=mStartTimeIsDefined;
@property double audioDuckOutDuration; // @synthesize audioDuckOutDuration=mAudioDuckOutDuration;
@property double audioDuckInDuration; // @synthesize audioDuckInDuration=mAudioDuckInDuration;
@property float audioDuckLevel; // @synthesize audioDuckLevel=mAudioDuckLevel;
@property double audioFadeOutDuration; // @synthesize audioFadeOutDuration=mAudioFadeOutDuration;
@property double audioFadeInDuration; // @synthesize audioFadeInDuration=mAudioFadeInDuration;
@property float audioVolume; // @synthesize audioVolume=mAudioVolume;
@property unsigned int index; // @synthesize index=mIndex;

@end
