/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSArray, SKUILimitListViewElement, SKUIPredicateListViewElement, SKUISortDescriptorListViewElement;

@interface SKUIAbstractEntityProviderViewElement : SKUIViewElement {

	NSString* _entityTypeString;
	NSArray* _prefetchedProperties;

}

@property (nonatomic,copy,readonly) NSString * entityTypeString;                                               //@synthesize entityTypeString=_entityTypeString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * prefetchedProperties;                                            //@synthesize prefetchedProperties=_prefetchedProperties - In the implementation block
@property (nonatomic,readonly) SKUILimitListViewElement * limitListViewElement; 
@property (nonatomic,readonly) SKUIPredicateListViewElement * predicateListViewElement; 
@property (nonatomic,readonly) SKUISortDescriptorListViewElement * sortDescriptorListViewElement; 
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(SKUIPredicateListViewElement *)predicateListViewElement;
-(NSString *)entityTypeString;
-(NSArray *)prefetchedProperties;
-(SKUILimitListViewElement *)limitListViewElement;
-(SKUISortDescriptorListViewElement *)sortDescriptorListViewElement;
@end

