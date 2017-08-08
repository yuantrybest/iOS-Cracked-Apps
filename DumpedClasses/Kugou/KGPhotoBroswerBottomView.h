//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGPhotoBroswerBottomDownloadView, UIButton;

@interface KGPhotoBroswerBottomView : UIView
{
    _Bool _isOrigin;
    long long _downLoadState;
    CDUnknownBlockType _saveBlock;
    CDUnknownBlockType _downloadBlock;
    CDUnknownBlockType _canCelDownloadBlock;
    CDUnknownBlockType _delBlock;
    long long _photoSize;
    long long _progress;
    UIButton *_saveBtn;
    UIButton *_delBtn;
    KGPhotoBroswerBottomDownloadView *_downloadView;
}

@property(retain, nonatomic) KGPhotoBroswerBottomDownloadView *downloadView; // @synthesize downloadView=_downloadView;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(nonatomic) long long progress; // @synthesize progress=_progress;
@property(nonatomic) long long photoSize; // @synthesize photoSize=_photoSize;
@property(copy, nonatomic) CDUnknownBlockType delBlock; // @synthesize delBlock=_delBlock;
@property(copy, nonatomic) CDUnknownBlockType canCelDownloadBlock; // @synthesize canCelDownloadBlock=_canCelDownloadBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadBlock; // @synthesize downloadBlock=_downloadBlock;
@property(copy, nonatomic) CDUnknownBlockType saveBlock; // @synthesize saveBlock=_saveBlock;
@property(nonatomic) long long downLoadState; // @synthesize downLoadState=_downLoadState;
@property(nonatomic) _Bool isOrigin; // @synthesize isOrigin=_isOrigin;
- (void).cxx_destruct;
- (void)delAction;
- (void)saveAction;
- (id)init;
- (void)dealloc;

@end
