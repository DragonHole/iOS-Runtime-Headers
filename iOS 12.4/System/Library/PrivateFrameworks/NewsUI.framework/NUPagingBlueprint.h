/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUPaging.h>

@class NSArray, NSOrderedSet, NSString;

@interface NUPagingBlueprint : NSObject <NUPaging> {

	NSOrderedSet* _blueprintItems;

}

@property (nonatomic,retain) NSOrderedSet * blueprintItems;              //@synthesize blueprintItems=_blueprintItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NUPage> firstPage; 
@property (nonatomic,readonly) id<NUPage> lastPage; 
@property (nonatomic,readonly) NSArray * allPages; 
-(NSArray *)allPages;
-(id)pageForIdentifier:(id)arg1 ;
-(id)pageBeforeForIdentifier:(id)arg1 ;
-(id)pageAfterIdentifier:(id)arg1 ;
-(void)forEachPage:(/*^block*/id)arg1 ;
-(id<NUPage>)firstPage;
-(id)initWithPages:(id)arg1 ;
-(NSOrderedSet *)blueprintItems;
-(id<NUPage>)lastPage;
-(void)setBlueprintItems:(NSOrderedSet *)arg1 ;
@end

