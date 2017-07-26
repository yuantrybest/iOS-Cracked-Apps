//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface MVBluredBackgroundChanger : UIView
{
    UIImageView *_imageView1;
    UIImageView *_imageView2;
    UIImageView *_currentImageView;
}

@property(retain, nonatomic) UIImageView *currentImageView; // @synthesize currentImageView=_currentImageView;
@property(retain, nonatomic) UIImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(retain, nonatomic) UIImageView *imageView1; // @synthesize imageView1=_imageView1;
- (void).cxx_destruct;
- (void)changeToImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeToImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithImage:(id)arg1;

@end
