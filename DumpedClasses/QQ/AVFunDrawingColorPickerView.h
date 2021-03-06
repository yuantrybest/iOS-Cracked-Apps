//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIImageView;

@interface AVFunDrawingColorPickerView : UIView
{
    UIImageView *_sliderView;
    UIImageView *_thumbView;
    UIImageView *_thumbImgView;
    CAShapeLayer *_thumbViewCenterLayer;
    id <AVFunDrawingColorPickerViewDelegate> _delegate;
}

@property(nonatomic) id <AVFunDrawingColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGPoint)getThumbCenterPoint;
- (void)setStartColor:(id)arg1;
- (id)colorAtImage:(id)arg1 point:(struct CGPoint)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawScanPreview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

