//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTImageView, CTTourHomeHandByHandRouteLine, NSMutableArray, UILabel, UIView;

@interface CTTourHomeHandByHandCell : UITableViewCell
{
    CTTourHomeHandByHandRouteLine *_routeLineInfo;
    UILabel *_routeLineTitleLabel;
    UIView *_routeLineTitleBottonLine;
    CTImageView *_routeLineImageView;
    UIView *_poiInfoView;
    NSMutableArray *_poiInfoViewArray;
}

@property(retain, nonatomic) NSMutableArray *poiInfoViewArray; // @synthesize poiInfoViewArray=_poiInfoViewArray;
@property(retain, nonatomic) UIView *poiInfoView; // @synthesize poiInfoView=_poiInfoView;
@property(retain, nonatomic) CTImageView *routeLineImageView; // @synthesize routeLineImageView=_routeLineImageView;
@property(retain, nonatomic) UIView *routeLineTitleBottonLine; // @synthesize routeLineTitleBottonLine=_routeLineTitleBottonLine;
@property(retain, nonatomic) UILabel *routeLineTitleLabel; // @synthesize routeLineTitleLabel=_routeLineTitleLabel;
@property(retain, nonatomic) CTTourHomeHandByHandRouteLine *routeLineInfo; // @synthesize routeLineInfo=_routeLineInfo;
- (void).cxx_destruct;
- (void)bindRouteLineInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

