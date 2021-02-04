/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFAccessorySettingItem.h>

@class HMAccessorySelectionSettingItem;

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem {

	HMAccessorySelectionSettingItem* _optionItem;

}

@property (nonatomic,retain) HMAccessorySelectionSettingItem * optionItem;              //@synthesize optionItem=_optionItem - In the implementation block
-(id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2 optionItem:(id)arg3 ;
-(id)settingKeyPath;
-(void)_decorateOutcomeWithDependencies:(id)arg1 ;
-(id)toggleSelection;
-(id)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMAccessorySelectionSettingItem *)optionItem;
-(void)setOptionItem:(HMAccessorySelectionSettingItem *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
@end
