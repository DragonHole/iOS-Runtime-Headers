/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet;

@interface CRSIdentifiedServiceRegistry : NSObject {

	NSMutableOrderedSet* _identifiedServices;

}
+(id)sharedInstance;
-(id)init;
-(void)registerIdentifiedService:(id)arg1 ;
-(id)identifiedServices;
@end

