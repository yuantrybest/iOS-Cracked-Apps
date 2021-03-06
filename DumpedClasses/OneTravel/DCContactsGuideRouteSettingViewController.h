//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class DBDDatePickerView, DBDRouteModel, DCContactsRouteSettingCellView, NSString, UIButton, UIImageView, UILabel;

@interface DCContactsGuideRouteSettingViewController : UIViewController
{
    _Bool _showStatusBar;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _settingFinished;
    DBDRouteModel *_routeModel;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIButton *_closeButton;
    UIButton *_confirmButton;
    DCContactsRouteSettingCellView *_workTimeCell;
    DCContactsRouteSettingCellView *_afterWorkTimeCell;
    DCContactsRouteSettingCellView *_homeAddressCell;
    DCContactsRouteSettingCellView *_companyAdressCell;
    DBDDatePickerView *_datePickerView;
    NSString *_selectGoWorkTime;
    NSString *_selectAfterWorkTime;
}

+ (void)load;
@property(copy, nonatomic) NSString *selectAfterWorkTime; // @synthesize selectAfterWorkTime=_selectAfterWorkTime;
@property(copy, nonatomic) NSString *selectGoWorkTime; // @synthesize selectGoWorkTime=_selectGoWorkTime;
@property(nonatomic) _Bool showStatusBar; // @synthesize showStatusBar=_showStatusBar;
@property(retain, nonatomic) DBDDatePickerView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) DCContactsRouteSettingCellView *companyAdressCell; // @synthesize companyAdressCell=_companyAdressCell;
@property(retain, nonatomic) DCContactsRouteSettingCellView *homeAddressCell; // @synthesize homeAddressCell=_homeAddressCell;
@property(retain, nonatomic) DCContactsRouteSettingCellView *afterWorkTimeCell; // @synthesize afterWorkTimeCell=_afterWorkTimeCell;
@property(retain, nonatomic) DCContactsRouteSettingCellView *workTimeCell; // @synthesize workTimeCell=_workTimeCell;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DBDRouteModel *routeModel; // @synthesize routeModel=_routeModel;
@property(copy, nonatomic) CDUnknownBlockType settingFinished; // @synthesize settingFinished=_settingFinished;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
- (void).cxx_destruct;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (struct CGRect)frameForDatePickerView:(_Bool)arg1;
- (void)setAfterWorkTime;
- (void)setWorkTime;
- (void)setCompanyAddress;
- (void)setHomeAddress;
- (void)closeAction:(id)arg1;
- (void)updateLayout;
- (void)showErrAlert:(id)arg1;
- (void)showErrAlert:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isFromFollowAction;
- (void)confirmAction;
- (_Bool)routeModelPOIValid;
- (_Bool)validRouteModel;
- (void)setupRouteModelTime;
- (void)setupRouteModelToInfo:(id)arg1;
- (void)setupRouteModelFromInfo:(id)arg1;
- (void)setupAfterWorkTime;
- (void)setupWorkTime;
- (void)setupCompanyAddress:(id)arg1;
- (void)setupHomeAddress:(id)arg1;
- (void)setup;
- (_Bool)validePOI:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

