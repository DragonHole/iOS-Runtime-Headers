/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FPXEnumeratorObserver.h>

@protocol FPXEnumerator;
@class FPItem, NSString;

@interface _FPChildrenEnumerator : NSObject <FPXEnumeratorObserver> {

	FPItem* _parentItem;
	id<FPXEnumerator> _enumerator;
	/*^block*/id _enumerationCallback;
	/*^block*/id _enumerationCompletionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)enumerateChildrenOfItem:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)enumerationResultsDidChange;
-(void)enumerateFromPage:(id)arg1 ;
-(id)initWithItem:(id)arg1 enumerationCallback:(/*^block*/id)arg2 ;
-(void)didUpdateItem:(id)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end

