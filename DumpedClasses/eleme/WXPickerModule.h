//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPickerViewDelegate.h"
#import "WXModuleProtocol.h"

@class NSArray, NSString, UIDatePicker, UIPickerView, UIView, WXSDKInstance;

@interface WXPickerModule : NSObject <WXModuleProtocol, UIPickerViewDelegate>
{
    _Bool _isAnimating;
    WXSDKInstance *weexInstance;
    UIPickerView *_picker;
    UIView *_backgroundView;
    UIView *_pickerView;
    NSArray *_items;
    long long _index;
    CDUnknownBlockType _callback;
    UIDatePicker *_datePicker;
    long long _datePickerMode;
}

+ (id)wx_export_method_43;
+ (id)wx_export_method_42;
+ (id)wx_export_method_41;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)doneDatePicker:(id)arg1;
- (void)cancelDatePicker:(id)arg1;
- (void)configDatePickerView;
- (void)createDatePicker:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)datepick:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pickTime:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pickDate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)createbackgroundView;
- (id)createPickerView;
- (void)configPickerView;
- (id)convertItem:(id)arg1;
- (_Bool)isRightItems:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)hide;
- (void)show;
- (void)createPicker:(id)arg1 index:(long long)arg2;
- (void)pick:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
