//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class KTVExplosionPointLayer, NSObject<OS_dispatch_semaphore>, UIView;

@interface KTVExplosionLayer : CALayer
{
    KTVExplosionPointLayer *_maxDurationLayer;
    UIView *_targetView;
    CALayer *_parentLayer;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    struct CGSize _targetSize;
}

+ (id)createLayer:(id)arg1 targetView:(id)arg2;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) CALayer *parentLayer; // @synthesize parentLayer=_parentLayer;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (void).cxx_destruct;
- (struct CGPoint)caculatePointWithTotal:(long long)arg1 Index:(long long)arg2 radius:(double)arg3;
- (id)createExplosionPointWithIndex:(long long)arg1;
- (void)explodeWithFinish:(CDUnknownBlockType)arg1;

@end

