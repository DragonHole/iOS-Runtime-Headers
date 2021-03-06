/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUPage;
@class NSString;

@interface NUPagingBlueprintItem : NSObject {

	id<NUPage> _page;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<NUPage> page;                    //@synthesize page=_page - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id<NUPage>)page;
-(id)initWithPage:(id)arg1 ;
-(id)initWithPageID:(id)arg1 ;
@end

