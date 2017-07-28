//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class FMImageView, NSString, UIImage, UILabel;

@interface FMTabViewButton : UIButton
{
    _Bool _fmVerticalLayout;
    NSString *_fmTitle;
    UIImage *_fmImage;
    UIImage *_fmSelectedImage;
    NSString *_fmImageURLString;
    NSString *_fmSelectedImageURLString;
    FMImageView *_fmImageView;
    UILabel *_fmTitleLabel;
}

@property(retain, nonatomic) UILabel *fmTitleLabel; // @synthesize fmTitleLabel=_fmTitleLabel;
@property(retain, nonatomic) FMImageView *fmImageView; // @synthesize fmImageView=_fmImageView;
@property(copy, nonatomic) NSString *fmSelectedImageURLString; // @synthesize fmSelectedImageURLString=_fmSelectedImageURLString;
@property(copy, nonatomic) NSString *fmImageURLString; // @synthesize fmImageURLString=_fmImageURLString;
@property(retain, nonatomic) UIImage *fmSelectedImage; // @synthesize fmSelectedImage=_fmSelectedImage;
@property(retain, nonatomic) UIImage *fmImage; // @synthesize fmImage=_fmImage;
@property(copy, nonatomic) NSString *fmTitle; // @synthesize fmTitle=_fmTitle;
@property(nonatomic) _Bool fmVerticalLayout; // @synthesize fmVerticalLayout=_fmVerticalLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;

@end
