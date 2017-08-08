//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KTVAchievementNetHelper, KTVUserAchievement, NSMutableArray, NSMutableDictionary, NSString;

@interface KTVUserAchievementViewModel : KFViewModelObject
{
    KTVAchievementNetHelper *_userInfoNetHelper;
    int _userID;
    KTVUserAchievement *_userHonorAchievement;
    KTVUserAchievement *_userRichAchievement;
    KTVUserAchievement *_userRankAchievement;
    long long _achievementCount;
    NSString *_headImageURLStr;
    long long _viewModelType;
    long long _userAchievementType;
    CDUnknownBlockType _successedBlock;
    CDUnknownBlockType _failedBlock;
    NSMutableArray *_historyListArr;
    NSMutableDictionary *_sectionHistoryListDic;
    NSMutableArray *_medalListArr;
}

@property(retain, nonatomic) NSMutableArray *medalListArr; // @synthesize medalListArr=_medalListArr;
@property(retain, nonatomic) NSMutableDictionary *sectionHistoryListDic; // @synthesize sectionHistoryListDic=_sectionHistoryListDic;
@property(retain, nonatomic) NSMutableArray *historyListArr; // @synthesize historyListArr=_historyListArr;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successedBlock; // @synthesize successedBlock=_successedBlock;
@property(nonatomic) long long userAchievementType; // @synthesize userAchievementType=_userAchievementType;
@property(nonatomic) long long viewModelType; // @synthesize viewModelType=_viewModelType;
@property(readonly, nonatomic) int userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *headImageURLStr; // @synthesize headImageURLStr=_headImageURLStr;
@property(nonatomic) long long achievementCount; // @synthesize achievementCount=_achievementCount;
@property(retain, nonatomic) KTVUserAchievement *userRankAchievement; // @synthesize userRankAchievement=_userRankAchievement;
@property(retain, nonatomic) KTVUserAchievement *userRichAchievement; // @synthesize userRichAchievement=_userRichAchievement;
@property(retain, nonatomic) KTVUserAchievement *userHonorAchievement; // @synthesize userHonorAchievement=_userHonorAchievement;
- (void).cxx_destruct;
- (void)LoadTheThreeDetailCellAtSection:(long long)arg1;
- (void)handleLoadMoreSuccessWithArray:(id)arg1;
- (void)handleUpdateSuccessWithArray:(id)arg1;
- (void)updateCompetition;
- (void)updateHistory;
- (void)update;
- (void)updateThreeDetailCellAtIndexPath:(id)arg1;
- (id)arrayOfItemInSection:(long long)arg1;
- (id)arrayOfViewModel;
- (id)arrayOfAchievementHistory;
- (void)getUserAchievementSuccessed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (id)initWithUserID:(int)arg1;

@end
