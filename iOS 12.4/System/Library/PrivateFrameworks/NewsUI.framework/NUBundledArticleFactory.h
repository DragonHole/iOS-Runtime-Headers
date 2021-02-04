/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUArticleFactory.h>

@class FCArticleController, NSString;

@interface NUBundledArticleFactory : NSObject <NUArticleFactory> {

	FCArticleController* _articleController;

}

@property (nonatomic,readonly) FCArticleController * articleController;              //@synthesize articleController=_articleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FCArticleController *)articleController;
-(id)createArticlesForArticleIDs:(id)arg1 ;
-(id)initWithArticleController:(id)arg1 ;
@end
