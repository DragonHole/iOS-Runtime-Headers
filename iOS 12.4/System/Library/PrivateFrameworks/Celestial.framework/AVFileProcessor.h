/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVFileProcessor : NSObject {

	float _percentComplete;

}
+(id)fileProcessor;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id*)arg3 ;
-(id)sinfsFromFilePath:(id)arg1 ;
-(id)sinfInfoFromFilePath:(id)arg1 ;
-(id)rentalInfo:(id)arg1 ;
@end
