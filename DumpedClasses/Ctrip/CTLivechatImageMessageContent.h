//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTLivechatMessageContent.h"

#import "CTLivechatProgressImageViewDelegate.h"

@class CTPickedImage, NSString, UIImage;

@interface CTLivechatImageMessageContent : CTLivechatMessageContent <CTLivechatProgressImageViewDelegate>
{
    CTPickedImage *_pickImage;
    double _imageHeight;
    double _imageWidth;
    UIImage *_assumeThumbLocalImage;
    UIImage *_assumeOriginLocalImage;
    double _uploadProgress;
    NSString *_originImageUrl;
    NSString *_thumbImageUrl;
    long long _uploadStatus;
    NSString *_thumbImagePath;
    NSString *_originImagePath;
    struct CGSize _imageSize;
}

@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSString *originImagePath; // @synthesize originImagePath=_originImagePath;
@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath=_thumbImagePath;
@property(nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSString *originImageUrl; // @synthesize originImageUrl=_originImageUrl;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) UIImage *assumeOriginLocalImage; // @synthesize assumeOriginLocalImage=_assumeOriginLocalImage;
@property(retain, nonatomic) UIImage *assumeThumbLocalImage; // @synthesize assumeThumbLocalImage=_assumeThumbLocalImage;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) CTPickedImage *pickImage; // @synthesize pickImage=_pickImage;
- (void).cxx_destruct;
- (double)width;
- (double)height;
- (void)maskAnimateScale:(double)arg1;
- (struct CGSize)compareSizeWithDefault:(struct CGSize)arg1;
- (id)initWithDict:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

