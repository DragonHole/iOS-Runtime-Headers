/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUILimitViewElement.h>

@class NSString;

@interface SKUICountLimitViewElement : SKUILimitViewElement {

	long long _limitValue;
	NSString* _entityTypeString;

}

@property (nonatomic,readonly) long long limitValue;                          //@synthesize limitValue=_limitValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityTypeString;              //@synthesize entityTypeString=_entityTypeString - In the implementation block
+(BOOL)shouldParseChildDOMElements;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)entityTypeString;
-(long long)limitValue;
@end
