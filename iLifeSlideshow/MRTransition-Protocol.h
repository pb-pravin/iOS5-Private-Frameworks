/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol MRTransition
- (id)initWithAttributes:(id)arg1;
- (void)renderAtTime:(double)arg1 andSize:(struct CGSize)arg2 withSourcePatchwork:(id)arg3 andTargetPatchwork:(id)arg4;
@property float pixelUnit;

@optional
- (void)precompute;
- (void)precomputeWithImage:(const CDStruct_911c9307 *)arg1 isTargetImage:(BOOL)arg2;
@end
