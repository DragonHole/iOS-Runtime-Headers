/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface _NSIPCallbackSerialization : NSObject {

	/*^block*/id _endBlock;
	AB _hasBegun;
	AB _hasEnded;
	NSUUID* _UUID;

}

@property (nonatomic,copy) NSUUID * UUID;              //@synthesize UUID=_UUID - In the implementation block
-(void)sendBeginBlock:(/*^block*/id)arg1 ;
-(void)sendEndBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
@end

