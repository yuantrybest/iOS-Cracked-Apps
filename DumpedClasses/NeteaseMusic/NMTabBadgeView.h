//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMBadgePointView, NMBadgeTextView, NMBadgeView;

@interface NMTabBadgeView : UIView
{
    NMBadgeView *_currentBadgeView;
    NMBadgeTextView *_textView;
    NMBadgePointView *_pointView;
    _Bool _asPoint;
    _Bool _highlighted;
}

@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) _Bool asPoint; // @synthesize asPoint=_asPoint;
- (void).cxx_destruct;
- (void)setBadgeValue:(id)arg1;
- (void)setAsPoint:(_Bool)arg1 theme:(id)arg2;
- (void)setBadgeAppearance:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

