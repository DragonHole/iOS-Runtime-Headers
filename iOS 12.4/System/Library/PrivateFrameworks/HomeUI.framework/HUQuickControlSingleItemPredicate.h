/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HUQuickControlItemPredicate.h>

@class NSString;

@interface HUQuickControlSingleItemPredicate : NSObject <HUQuickControlItemPredicate> {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                   //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfMatches; 
+(id)predicateWithControlItemClass:(Class)arg1 ;
-(BOOL)matchesControlItem:(id)arg1 ;
-(id)matchingControlItemsForControlItems:(id)arg1 ;
-(unsigned long long)maximumNumberOfMatches;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
