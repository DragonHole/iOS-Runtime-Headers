/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSMutableSet, NSArray;

@interface TIFuzzyPinyinController : PSListController {

	PSSpecifier* _fuzzyPinyinSpecifier;
	NSMutableSet* _fuzzyPinyinPairs;
	NSArray* _fuzzyPinyinPairSpecifiers;

}

@property (nonatomic,retain) PSSpecifier * fuzzyPinyinSpecifier;              //@synthesize fuzzyPinyinSpecifier=_fuzzyPinyinSpecifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * fuzzyPinyinPairs;                 //@synthesize fuzzyPinyinPairs=_fuzzyPinyinPairs - In the implementation block
@property (nonatomic,copy) NSArray * fuzzyPinyinPairSpecifiers;               //@synthesize fuzzyPinyinPairSpecifiers=_fuzzyPinyinPairSpecifiers - In the implementation block
-(void)dealloc;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)setKeyboardPreferenceValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)readFuzzyPinyinPairs;
-(void)setFuzzyPinyinPairs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)fuzzyPinyinPairs;
-(NSArray *)fuzzyPinyinPairSpecifiers;
-(void)setFuzzyPinyinPairSpecifiers:(NSArray *)arg1 ;
-(id)keyboardPreferenceValue:(id)arg1 ;
-(PSSpecifier *)fuzzyPinyinSpecifier;
-(void)setFuzzyPinyinSpecifier:(PSSpecifier *)arg1 ;
@end
