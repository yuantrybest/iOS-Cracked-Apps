//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

#import "TBLiveFeedCardHeaderViewDelegate.h"
#import "TBLiveFeedFollowGroupGridCellDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSMutableArray, NSString, TBLiveFeedCardHeaderView, UICollectionView, UIView;

@interface TBLiveFeedFollowGroupCell : TBLiveTableViewCell <TBLiveFeedCardHeaderViewDelegate, TBLiveFeedFollowGroupGridCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UIView *_cellView;
    TBLiveFeedCardHeaderView *_headerView;
    UICollectionView *_collectionView;
    NSString *_jumpUrl;
    NSMutableArray *_modelArray;
}

+ (_Bool)showCollectionViewWithModel:(id)arg1;
+ (double)cellHeightWithModel:(id)arg1;
+ (struct CGSize)viewSizeWithModel:(id)arg1;
@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) TBLiveFeedCardHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)clickMoreFollow;
- (void)didClickMoreFollow;
- (void)userClickActionOnView:(id)arg1;
- (void)refreshWithModel:(id)arg1;
- (void)setupCollectionView;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
