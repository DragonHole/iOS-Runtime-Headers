/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSMutableArray;

@interface MPMiddlewareOperationMap : NSObject {

	NSMapTable* _middlewareOperationMap;
	NSMutableArray* _middleware;
	NSMutableArray* _operations;

}
+(id)mapForRequest:(id)arg1 ;
-(id)allMiddleware;
-(id)operationsForMiddleware:(id)arg1 ;
-(id)allOperations;
-(id)_init;
@end
