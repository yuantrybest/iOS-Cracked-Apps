//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface HCCardEmptyView : UIView
{
    UILabel *_tipsLabel;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void).cxx_destruct;
- (struct CGSize)adapterImageSize;
- (double)adapterLabelFontSize;
- (double)adapterLabelOriginY;
- (double)adapterImageOriginY;
- (void)layoutSubviews;
- (void)refreshContent;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
