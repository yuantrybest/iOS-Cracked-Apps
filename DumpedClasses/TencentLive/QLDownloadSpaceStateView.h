//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface QLDownloadSpaceStateView : UIView
{
    _Bool _isInfoLabelTextNeedAddAttribute;
    UILabel *_infoLable;
    double _baseSpace;
    double _addSpace;
}

@property(nonatomic) double addSpace; // @synthesize addSpace=_addSpace;
@property(nonatomic) double baseSpace; // @synthesize baseSpace=_baseSpace;
@property(nonatomic) _Bool isInfoLabelTextNeedAddAttribute; // @synthesize isInfoLabelTextNeedAddAttribute=_isInfoLabelTextNeedAddAttribute;
@property(retain, nonatomic) UILabel *infoLable; // @synthesize infoLable=_infoLable;
- (void).cxx_destruct;
- (void)flushProgress;
- (long long)getAddedSpace;
- (void)updateForSpace:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
