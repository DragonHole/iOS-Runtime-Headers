/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrototypeTools/PrototypeTools-Structs.h>
@class NSMutableDictionary;

@interface PTOutlet : NSObject {

	unsigned long long _nextToken;
	NSMutableDictionary* _actionsByToken;

}
-(void)_invokeActions;
-(void)removeActionForToken:(NSNumber*)arg1 ;
-(NSNumber*)addAction:(/*^block*/id)arg1 ;
-(id)_init;
@end

