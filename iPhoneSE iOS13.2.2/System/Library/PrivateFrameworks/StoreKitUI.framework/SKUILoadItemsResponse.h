/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSSet;

@interface SKUILoadItemsResponse : NSObject {

	NSDictionary* _loadedItems;
	NSSet* _invalidItemIdentifiers;

}

@property (nonatomic,copy) NSDictionary * loadedItems;                  //@synthesize loadedItems=_loadedItems - In the implementation block
@property (nonatomic,copy) NSSet * invalidItemIdentifiers;              //@synthesize invalidItemIdentifiers=_invalidItemIdentifiers - In the implementation block
-(void)setLoadedItems:(NSDictionary *)arg1 ;
-(NSDictionary *)loadedItems;
-(void)setInvalidItemIdentifiers:(NSSet *)arg1 ;
-(NSSet *)invalidItemIdentifiers;
@end

