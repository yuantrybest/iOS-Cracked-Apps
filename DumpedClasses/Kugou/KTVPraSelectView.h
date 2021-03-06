//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KTVButton, UIButton;

@interface KTVPraSelectView : UIView
{
    _Bool _isShow;
    _Bool _isAnimation;
    id <KTVPraSelectViewDelegate> _delegate;
    KTVButton *_fragmentRecordButton;
    KTVButton *_practicingSingRecordButton;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) KTVButton *practicingSingRecordButton; // @synthesize practicingSingRecordButton=_practicingSingRecordButton;
@property(retain, nonatomic) KTVButton *fragmentRecordButton; // @synthesize fragmentRecordButton=_fragmentRecordButton;
@property(nonatomic) __weak id <KTVPraSelectViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)dissWindowAnimation;
- (void)showInWindowAnimation:(_Bool)arg1;
- (void)hideWithAnimation:(_Bool)arg1;
- (void)showWithAnimation:(_Bool)arg1;
- (void)cancelAction:(id)arg1;
- (void)singleRecordAction:(id)arg1;
- (void)totalRecordAction:(id)arg1;
- (void)layoutSubviews;
- (void)tapView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

