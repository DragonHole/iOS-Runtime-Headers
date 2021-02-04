/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class NSSet, HMHome, NSMutableSet;

@interface HFConditionItemProvider : HFItemProvider {

	NSSet* _conditions;
	HMHome* _home;
	NSMutableSet* _conditionItems;

}

@property (nonatomic,readonly) NSMutableSet * conditionItems;              //@synthesize conditionItems=_conditionItems - In the implementation block
@property (nonatomic,retain) NSSet * conditions;                           //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) HMHome * home;                              //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(NSSet *)conditions;
-(NSMutableSet *)conditionItems;
-(id)initWithConditions:(id)arg1 home:(id)arg2 ;
-(id)reloadItems;
-(void)setConditions:(NSSet *)arg1 ;
-(id)init;
-(id)items;
@end
