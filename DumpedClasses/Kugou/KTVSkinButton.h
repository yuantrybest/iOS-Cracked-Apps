//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVButton.h"

@class NSMutableDictionary;

@interface KTVSkinButton : KTVButton
{
    NSMutableDictionary *_images;
    NSMutableDictionary *_imagenames;
    NSMutableDictionary *_autoSkinDic;
    NSMutableDictionary *_autoColor;
    _Bool _isReciveSkinNoti;
    _Bool _useSkin;
    _Bool _autoSkin;
}

@property(nonatomic) _Bool autoSkin; // @synthesize autoSkin=_autoSkin;
@property(nonatomic) _Bool useSkin; // @synthesize useSkin=_useSkin;
- (void).cxx_destruct;
- (void)setBackGroundColor:(id)arg1 ForState:(unsigned long long)arg2;
- (void)SetSkinImage:(id)arg1 state:(long long)arg2;
- (void)ChangeSkinForState:(id)arg1;
- (void)OnSkinChange:(id)arg1;
- (void)CheckReciveSkinChangeNoti;
- (void)setBackGroundAutoSkin:(_Bool)arg1 forState:(unsigned long long)arg2;
- (void)setAutoSkin:(_Bool)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)privateInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

