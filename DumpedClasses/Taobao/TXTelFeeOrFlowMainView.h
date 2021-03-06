//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "CNContactPickerDelegate.h"
#import "TXPhoneNumberViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSArray<TXBottomConfigModel>, NSMutableArray, NSString, TXAutoScrollLabel, TXFlowView, TXOneFamilyView, TXPayView, TXPhoneNumberView, TXQueryEcardModel, TXQueryFlowCardModel, TXTabView, TXTelFeeOrFlowHandler, TXTelFeeView, UIImageView, UIScrollView;

@interface TXTelFeeOrFlowMainView : UIView <TXPhoneNumberViewDelegate, UIScrollViewDelegate, CNContactPickerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonViewControllerDelegate>
{
    TXQueryEcardModel *_ecardModel;
    TXQueryFlowCardModel *_flowCardModel;
    _Bool _isTelFeeTabSelected;
    _Bool _haveFocused;
    _Bool _themeSkinIsValid;
    TXTelFeeOrFlowHandler *_handler;
    UIScrollView *_scrollView;
    TXAutoScrollLabel *_noticeView;
    UIImageView *_bannerView;
    UIImageView *_themeSkinHeaderView;
    TXPhoneNumberView *_phoneNumView;
    TXTabView *_tabView;
    UIImageView *_themeSkinPhoneTabBgView;
    TXTelFeeView *_telFeeView;
    TXFlowView *_flowView;
    TXPayView *_payView;
    TXOneFamilyView *_bottomView;
    UIView *_maskView;
    UIView *_familyMaskView;
    NSString *_lastPhoneNum;
    NSString *_lastQueryPhoneNum;
    NSString *_lastBelongTo;
    NSString *_lastContactName;
    NSString *_lastFeeQueryHintError;
    NSString *_lastFlowQueryHintError;
    long long _tableType;
    NSMutableArray *_historyList;
    NSArray *_similarList;
    NSArray *_paddingList;
    NSString *_defaultPhoneNum;
    NSArray<TXBottomConfigModel> *_bottomUrl;
}

+ (id)PhoneNumErrorTip;
+ (id)PhoneNumUpdate;
+ (id)VcDidAppear;
+ (id)VcDidDisappear;
+ (id)SelectTelFeeTab;
+ (id)FlowCardError;
+ (id)EcardError;
+ (id)FlowCardUpdate;
+ (id)EcardUpdate;
+ (id)HistoryContactsUpdate;
+ (id)DoNotChangeBtnClicked;
+ (id)PhoneNumCellDidSelected;
+ (id)PhoneNumEndEditing;
+ (id)PhoneNumBeginEditing;
+ (id)FlowTabClicked;
+ (id)TelFeeTabClicked;
+ (id)ShowToastForLengthError;
+ (id)RemoveHistoryContact;
+ (id)HeaderViewClicked;
+ (id)BannerViewClicked;
+ (id)PhoneNumInputCompleted;
+ (id)PresentContactPickerVC;
@property(retain, nonatomic) NSArray<TXBottomConfigModel> *bottomUrl; // @synthesize bottomUrl=_bottomUrl;
@property(nonatomic) _Bool themeSkinIsValid; // @synthesize themeSkinIsValid=_themeSkinIsValid;
@property(copy, nonatomic) NSString *defaultPhoneNum; // @synthesize defaultPhoneNum=_defaultPhoneNum;
@property(nonatomic) _Bool haveFocused; // @synthesize haveFocused=_haveFocused;
@property(retain, nonatomic) NSArray *paddingList; // @synthesize paddingList=_paddingList;
@property(retain, nonatomic) NSArray *similarList; // @synthesize similarList=_similarList;
@property(retain, nonatomic) NSMutableArray *historyList; // @synthesize historyList=_historyList;
@property(nonatomic) long long tableType; // @synthesize tableType=_tableType;
@property(copy, nonatomic) NSString *lastFlowQueryHintError; // @synthesize lastFlowQueryHintError=_lastFlowQueryHintError;
@property(copy, nonatomic) NSString *lastFeeQueryHintError; // @synthesize lastFeeQueryHintError=_lastFeeQueryHintError;
@property(copy, nonatomic) NSString *lastContactName; // @synthesize lastContactName=_lastContactName;
@property(copy, nonatomic) NSString *lastBelongTo; // @synthesize lastBelongTo=_lastBelongTo;
@property(copy, nonatomic) NSString *lastQueryPhoneNum; // @synthesize lastQueryPhoneNum=_lastQueryPhoneNum;
@property(copy, nonatomic) NSString *lastPhoneNum; // @synthesize lastPhoneNum=_lastPhoneNum;
@property(retain, nonatomic) TXQueryFlowCardModel *flowCardModel; // @synthesize flowCardModel=_flowCardModel;
@property(retain, nonatomic) TXQueryEcardModel *ecardModel; // @synthesize ecardModel=_ecardModel;
@property(nonatomic) _Bool isTelFeeTabSelected; // @synthesize isTelFeeTabSelected=_isTelFeeTabSelected;
@property(retain, nonatomic) UIView *familyMaskView; // @synthesize familyMaskView=_familyMaskView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) TXOneFamilyView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) TXPayView *payView; // @synthesize payView=_payView;
@property(retain, nonatomic) TXFlowView *flowView; // @synthesize flowView=_flowView;
@property(retain, nonatomic) TXTelFeeView *telFeeView; // @synthesize telFeeView=_telFeeView;
@property(retain, nonatomic) UIImageView *themeSkinPhoneTabBgView; // @synthesize themeSkinPhoneTabBgView=_themeSkinPhoneTabBgView;
@property(retain, nonatomic) TXTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) TXPhoneNumberView *phoneNumView; // @synthesize phoneNumView=_phoneNumView;
@property(retain, nonatomic) UIImageView *themeSkinHeaderView; // @synthesize themeSkinHeaderView=_themeSkinHeaderView;
@property(retain, nonatomic) UIImageView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) TXAutoScrollLabel *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak TXTelFeeOrFlowHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)updateNoticeAndBanner;
- (_Bool)isShowNotice;
- (_Bool)isShowBanner;
- (void)handleDownUISignal:(id)arg1;
- (void)handleUpUISignal_TXPayView:(id)arg1;
- (void)handleUpUISignal_TXFlowView_PayBtnClicked:(id)arg1;
- (void)handleUpUISignal_TXFlowView_GridItemClicked:(id)arg1;
- (void)handleUpUISignal_TXTelFeeView_GridItemClicked:(id)arg1;
- (void)handleUpUISignal_TXTabView_TabItemClicked:(id)arg1;
- (void)onScrollViewRefreshTriggered;
- (void)onDeleteHistoryBtnClick:(id)arg1;
- (void)onHeaderClicked:(id)arg1;
- (void)onDontChangeBtnClick:(id)arg1;
- (void)onBannerClicked:(id)arg1;
- (void)cancelInput;
- (void)queryPhoneNum:(id)arg1;
- (void)showStockOutInfo:(id)arg1;
- (_Bool)selectPerson:(void *)arg1 property:(int)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (_Bool)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)phoneNumStringOfIndexPath:(id)arg1;
- (double)heightOfTableViewCellInPhoneNumberView:(id)arg1;
- (void)phoneNumberView:(id)arg1 tableView:(id)arg2 didSelectRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableFooterViewInPhoneNumberView:(id)arg1;
- (id)tableHeaderViewInPhoneNumberView:(id)arg1;
- (double)heightOfTableViewInPhoneNumberView:(id)arg1;
- (void)phoneNumberViewDidEndEditing:(id)arg1;
- (void)phoneNumberViewDidBeginEditing:(id)arg1;
- (void)phoneNumDidChangedInPhoneNumberView:(id)arg1;
- (void)cancelBtnClickInPhoneNumberView:(id)arg1;
- (void)contactBtnClickInPhoneNumberView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)autoGetFocus;
- (void)resetFlowEmpty;
- (void)resetTelFeeEmpty;
- (void)resetEmpty;
- (void)matchPhoneNum:(id)arg1;
- (void)setThemeSkin:(_Bool)arg1;
- (void)setBottomConfig:(id)arg1;
- (id)getCurrentPhoneStr;
- (void)isInputing:(_Bool)arg1;
- (void)updateUI;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *BannerViewClicked; // @dynamic BannerViewClicked;
@property(readonly, nonatomic) NSString *DoNotChangeBtnClicked; // @dynamic DoNotChangeBtnClicked;
@property(readonly, nonatomic) NSString *EcardError; // @dynamic EcardError;
@property(readonly, nonatomic) NSString *EcardUpdate; // @dynamic EcardUpdate;
@property(readonly, nonatomic) NSString *FlowCardError; // @dynamic FlowCardError;
@property(readonly, nonatomic) NSString *FlowCardUpdate; // @dynamic FlowCardUpdate;
@property(readonly, nonatomic) NSString *FlowTabClicked; // @dynamic FlowTabClicked;
@property(readonly, nonatomic) NSString *HeaderViewClicked; // @dynamic HeaderViewClicked;
@property(readonly, nonatomic) NSString *HistoryContactsUpdate; // @dynamic HistoryContactsUpdate;
@property(readonly, nonatomic) NSString *PhoneNumBeginEditing; // @dynamic PhoneNumBeginEditing;
@property(readonly, nonatomic) NSString *PhoneNumCellDidSelected; // @dynamic PhoneNumCellDidSelected;
@property(readonly, nonatomic) NSString *PhoneNumEndEditing; // @dynamic PhoneNumEndEditing;
@property(readonly, nonatomic) NSString *PhoneNumErrorTip; // @dynamic PhoneNumErrorTip;
@property(readonly, nonatomic) NSString *PhoneNumInputCompleted; // @dynamic PhoneNumInputCompleted;
@property(readonly, nonatomic) NSString *PhoneNumUpdate; // @dynamic PhoneNumUpdate;
@property(readonly, nonatomic) NSString *PresentContactPickerVC; // @dynamic PresentContactPickerVC;
@property(readonly, nonatomic) NSString *RemoveHistoryContact; // @dynamic RemoveHistoryContact;
@property(readonly, nonatomic) NSString *SelectTelFeeTab; // @dynamic SelectTelFeeTab;
@property(readonly, nonatomic) NSString *ShowToastForLengthError; // @dynamic ShowToastForLengthError;
@property(readonly, nonatomic) NSString *TelFeeTabClicked; // @dynamic TelFeeTabClicked;
@property(readonly, nonatomic) NSString *VcDidAppear; // @dynamic VcDidAppear;
@property(readonly, nonatomic) NSString *VcDidDisappear; // @dynamic VcDidDisappear;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

