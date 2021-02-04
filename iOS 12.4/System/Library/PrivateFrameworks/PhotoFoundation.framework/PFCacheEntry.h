/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopyingNSObject;
@interface PFCacheEntry : NSObject {

	id<NSCopying><NSObject> _key;
	id _value;
	unsigned long long _createTime;
	unsigned long long _lastReadTime;
	unsigned long long _readCount;

}
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)readCount;
-(unsigned long long)createTime;
-(unsigned long long)lastReadTime;
-(id)description;
-(id)value;
-(id)key;
-(void)touch;
@end
