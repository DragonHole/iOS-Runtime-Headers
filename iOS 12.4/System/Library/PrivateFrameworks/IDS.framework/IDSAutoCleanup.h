/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSAutoCleanup : NSObject {

	/*^block*/id _cleanupBlock;
	int _accessCount;

}
-(void)incrementAccessCount;
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
