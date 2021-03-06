//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "CollectDataSourceDelegate.h"
#import "KGIndexViewDelegate.h"
#import "MusicTableCellPlayStateDelegate.h"
#import "MusicTableViewDataSource.h"
#import "MusicTableViewDelegate.h"

@class CollectDataSource, CollectListEntity, KGIndexView, KGSkinButton, KGThemeButton, KGThemeLabel, KGThemeView, MusicTableView, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UIView;

@interface ImportMusicViewController : KGViewController <MusicTableViewDelegate, MusicTableViewDataSource, CollectDataSourceDelegate, MusicTableCellPlayStateDelegate, KGIndexViewDelegate>
{
    _Bool _isIndexing;
    CollectDataSource *_dataSource;
    CollectListEntity *_collectListEntity;
    NSMutableArray *_songInfoArray;
    MusicTableView *_tableView;
    KGIndexView *_indexView;
    KGSkinButton *_sortByNameButton;
    KGSkinButton *_sortByTimeButton;
    NSMutableArray *_dataArray;
    KGThemeLabel *_promptLabel;
    KGThemeButton *_allSelectBtn;
    KGThemeView *_tableHeaderView;
    UIView *_toolBarView;
    UIView *_blankView;
    NSMutableArray *_canSelectArray;
    NSMutableDictionary *_indexDicts;
    NSMutableArray *_selectedSongs;
    unsigned long long _songCount;
    UIImageView *_bgImageViewInHeaderView;
}

@property(retain, nonatomic) UIImageView *bgImageViewInHeaderView; // @synthesize bgImageViewInHeaderView=_bgImageViewInHeaderView;
@property(nonatomic) unsigned long long songCount; // @synthesize songCount=_songCount;
@property(nonatomic) _Bool isIndexing; // @synthesize isIndexing=_isIndexing;
@property(retain, nonatomic) NSMutableArray *selectedSongs; // @synthesize selectedSongs=_selectedSongs;
@property(retain, nonatomic) NSMutableDictionary *indexDicts; // @synthesize indexDicts=_indexDicts;
@property(retain, nonatomic) NSMutableArray *canSelectArray; // @synthesize canSelectArray=_canSelectArray;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) UIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) KGThemeView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) KGThemeButton *allSelectBtn; // @synthesize allSelectBtn=_allSelectBtn;
@property(retain, nonatomic) KGThemeLabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak KGSkinButton *sortByTimeButton; // @synthesize sortByTimeButton=_sortByTimeButton;
@property(nonatomic) __weak KGSkinButton *sortByNameButton; // @synthesize sortByNameButton=_sortByNameButton;
@property(retain, nonatomic) KGIndexView *indexView; // @synthesize indexView=_indexView;
@property(retain, nonatomic) MusicTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *songInfoArray; // @synthesize songInfoArray=_songInfoArray;
@property(retain, nonatomic) CollectListEntity *collectListEntity; // @synthesize collectListEntity=_collectListEntity;
@property(retain, nonatomic) CollectDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)bIFoStringWithOutTitleAndWithNeedEntityNameExceptMyfavorAndDefaultCollect:(_Bool)arg1;
- (id)bIModuleString;
- (long long)showPlayBarWay;
- (void)KGUsingControllerState:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didUpdateUserPortraited:(id)arg1;
- (void)updateComplete:(_Bool)arg1;
- (void)collectUsersDidLoadFailedWithError:(id)arg1;
- (void)collectUsersDidLoaded;
- (void)collectEntityInfoDidLoadFailed;
- (void)collectEntityInfoDidLoaded;
- (void)setOfflineFailedWithError:(id)arg1;
- (void)setOfflineSuccess:(_Bool)arg1;
- (void)collectEntityFailedWithError:(id)arg1;
- (void)collectEntitySuccess;
- (void)didGetCollectUser:(id)arg1;
- (void)sourceDidLoadFailed;
- (void)sourceDidDeleteSongSuccess;
- (void)sourceDataDidClear:(id)arg1;
- (void)sourceDidFinishLoadData:(id)arg1;
- (void)sourceUpdatePartOfData:(id)arg1;
- (void)sourceStartGetData:(id)arg1;
- (void)selectSongsfilter;
- (void)addSucceed:(id)arg1;
- (void)finishBtnAction:(id)arg1;
- (void)allSelectAction:(id)arg1;
- (_Bool)isMusicTableCellPlayingState:(id)arg1;
- (void)showSelectRow;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getAllSongInfos;
- (_Bool)showSelectedIndexItem:(id)arg1 index:(unsigned long long)arg2;
- (void)pandoItem:(id)arg1 index:(unsigned long long)arg2;
- (double)screenSize;
- (void)didReceiveMemoryWarning;
- (id)indexItemArr;
- (void)createIndexView;
- (void)reView;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

