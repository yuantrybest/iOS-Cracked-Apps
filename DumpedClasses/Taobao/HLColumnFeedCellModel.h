//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "HLBizSourceProtocol.h"
#import "NSCoding.h"

@class HLBizSourceModel, HLExtendInfoModel, HLInteractModel, HLVoteDO, NSArray, NSArray<HLColumnFeedCellModel>, NSArray<HLFeedbackModel>, NSArray<HLTagModel>, NSString;

@interface HLColumnFeedCellModel : TBJSONModel <NSCoding, HLBizSourceProtocol>
{
    _Bool _openWithTBC;
    _Bool _canFeedBack;
    _Bool _isRead;
    NSString *_feedId;
    long long _form;
    NSString *_imageUrl;
    NSString *_detailUrl;
    NSString *_extraInfo;
    NSString *_detailUrlForShare;
    NSString *_type;
    NSString *_videoUrl;
    NSString *_publishId;
    NSString *_title;
    NSString *_feedDescription;
    NSString *_feedSourceId;
    NSString *_contentTypeIcon;
    NSString *_videoTime;
    unsigned long long _collectBizId;
    NSString *_collectUrl;
    unsigned long long _darenTaoContentId;
    NSString *_tailName;
    NSString *_tailUrl;
    NSArray *_imageList;
    HLBizSourceModel *_bizSource;
    HLInteractModel *_interact;
    HLExtendInfoModel *_extendInfo;
    HLVoteDO *_vote;
    NSArray<HLColumnFeedCellModel> *_subFeeds;
    NSArray<HLTagModel> *_tagList;
    NSArray<HLFeedbackModel> *_feedBackList;
    NSString *_timeTips;
    NSString *_openUrl;
    NSString *_viewNum;
    NSString *_bizSourceId;
}

+ (id)jsonToModelKeyMapDictionary;
@property(copy, nonatomic) NSString *bizSourceId; // @synthesize bizSourceId=_bizSourceId;
@property(copy, nonatomic) NSString *viewNum; // @synthesize viewNum=_viewNum;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSString *timeTips; // @synthesize timeTips=_timeTips;
@property(retain, nonatomic) NSArray<HLFeedbackModel> *feedBackList; // @synthesize feedBackList=_feedBackList;
@property(nonatomic) _Bool canFeedBack; // @synthesize canFeedBack=_canFeedBack;
@property(retain, nonatomic) NSArray<HLTagModel> *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSArray<HLColumnFeedCellModel> *subFeeds; // @synthesize subFeeds=_subFeeds;
@property(retain, nonatomic) HLVoteDO *vote; // @synthesize vote=_vote;
@property(retain, nonatomic) HLExtendInfoModel *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) HLInteractModel *interact; // @synthesize interact=_interact;
@property(retain, nonatomic) HLBizSourceModel *bizSource; // @synthesize bizSource=_bizSource;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
@property(copy, nonatomic) NSString *tailUrl; // @synthesize tailUrl=_tailUrl;
@property(copy, nonatomic) NSString *tailName; // @synthesize tailName=_tailName;
@property(nonatomic) unsigned long long darenTaoContentId; // @synthesize darenTaoContentId=_darenTaoContentId;
@property(retain, nonatomic) NSString *collectUrl; // @synthesize collectUrl=_collectUrl;
@property(nonatomic) unsigned long long collectBizId; // @synthesize collectBizId=_collectBizId;
@property(retain, nonatomic) NSString *videoTime; // @synthesize videoTime=_videoTime;
@property(copy, nonatomic) NSString *contentTypeIcon; // @synthesize contentTypeIcon=_contentTypeIcon;
@property(retain, nonatomic) NSString *feedSourceId; // @synthesize feedSourceId=_feedSourceId;
@property(retain, nonatomic) NSString *feedDescription; // @synthesize feedDescription=_feedDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) _Bool openWithTBC; // @synthesize openWithTBC=_openWithTBC;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *detailUrlForShare; // @synthesize detailUrlForShare=_detailUrlForShare;
@property(retain, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long form; // @synthesize form=_form;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
@property(nonatomic) _Bool subscribed;
@property(readonly, nonatomic) unsigned long long subscribeCount;
@property(readonly, nonatomic) NSString *icon;
@property(readonly, nonatomic) NSString *name;
- (void)updateWithModel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

