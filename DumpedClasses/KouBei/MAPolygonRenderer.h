//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAOverlayPathRenderer.h"

@class MAPolygon;

@interface MAPolygonRenderer : MAOverlayPathRenderer
{
}

- (id)initWithPolygon:(id)arg1;
- (void)glRender;
- (void)referenceDidChange;
@property(readonly, nonatomic) MAPolygon *polygon;

@end

