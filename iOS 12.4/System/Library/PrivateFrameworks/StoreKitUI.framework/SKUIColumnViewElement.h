/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIHeaderViewElement;

@interface SKUIColumnViewElement : SKUIViewElement {

	long long _columnSpan;

}

@property (nonatomic,readonly) long long columnSpan;                               //@synthesize columnSpan=_columnSpan - In the implementation block
@property (nonatomic,readonly) SKUIHeaderViewElement * headerElement; 
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(SKUIHeaderViewElement *)headerElement;
-(long long)columnSpan;
@end
