//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVEffectSobelEdgeDetectionFilter.h"

@interface QQAVEffectPrewittEdgeDetectionFilter : QQAVEffectSobelEdgeDetectionFilter
{
    int thresholdUniform;
    int SeverControlEdgeUniform;
    _Bool OverrideImageSize;
    double _threshold;
    double _edgeStrength;
    double _SeverControlEdge;
}

@property(nonatomic) double SeverControlEdge; // @synthesize SeverControlEdge=_SeverControlEdge;
- (void)setEdgeStrength:(double)arg1;
- (double)edgeStrength;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (void)dealloc;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)init;

@end

