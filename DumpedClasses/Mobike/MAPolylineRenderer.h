//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAOverlayPathRenderer.h"

@class MAPolyline;

@interface MAPolylineRenderer : MAOverlayPathRenderer
{
}

- (id)initWithPolyline:(id)arg1;
- (void)glRender;
- (void)setFillColor:(id)arg1;
@property(readonly, nonatomic) MAPolyline *polyline;

@end

