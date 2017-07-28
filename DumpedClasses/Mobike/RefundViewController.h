//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_ViewController.h"

@class UIButton, UIImageView, UILabel;

@interface RefundViewController : Mobike_ViewController
{
    _Bool _success;
    UIImageView *_reminderImageView;
    UILabel *_reminderLabel;
    UILabel *_refundSumLabel;
    UILabel *_explainLabel;
    UIButton *_showDeatilBtn;
    UILabel *_currencySymbol;
    UILabel *_deposit;
    UIButton *_makeSureButton;
}

@property(nonatomic) __weak UIButton *makeSureButton; // @synthesize makeSureButton=_makeSureButton;
@property(retain, nonatomic) UILabel *deposit; // @synthesize deposit=_deposit;
@property(retain, nonatomic) UILabel *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
@property(nonatomic) __weak UIButton *showDeatilBtn; // @synthesize showDeatilBtn=_showDeatilBtn;
@property(nonatomic) __weak UILabel *explainLabel; // @synthesize explainLabel=_explainLabel;
@property(nonatomic) __weak UILabel *refundSumLabel; // @synthesize refundSumLabel=_refundSumLabel;
@property(nonatomic) __weak UILabel *reminderLabel; // @synthesize reminderLabel=_reminderLabel;
@property(nonatomic) __weak UIImageView *reminderImageView; // @synthesize reminderImageView=_reminderImageView;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)showDeatilView:(id)arg1;
- (void)makeSureRefund:(id)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)setupView;
- (void)setupController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onBackAction:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
