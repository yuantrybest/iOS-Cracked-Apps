//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTAnnotation.h"

@class CPTConstraints, CPTLayer;

@interface CPTLayerAnnotation : CPTAnnotation
{
    CPTLayer *anchorLayer;
    CPTConstraints *xConstraints;
    CPTConstraints *yConstraints;
    int rectAnchor;
}

@property(retain, nonatomic) CPTConstraints *yConstraints; // @synthesize yConstraints;
@property(retain, nonatomic) CPTConstraints *xConstraints; // @synthesize xConstraints;
@property(nonatomic) int rectAnchor; // @synthesize rectAnchor;
@property(readonly, nonatomic) CPTLayer *anchorLayer; // @synthesize anchorLayer;
- (void)setConstraints;
- (void)positionContentLayer;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAnchorLayer:(id)arg1;

@end

