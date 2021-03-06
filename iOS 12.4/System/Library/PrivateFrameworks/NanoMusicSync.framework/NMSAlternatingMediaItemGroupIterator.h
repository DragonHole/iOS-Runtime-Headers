/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NMSMediaItemGroupIterator.h>

@interface NMSAlternatingMediaItemGroupIterator : NMSMediaItemGroupIterator {

	unsigned long long _maxItemListSize;

}
-(unsigned long long)iteratingOrder;
-(void)resetToIterateOverQuotaIdentifiers;
-(void)_generateItemListAndSizesDictIfNecessary;
-(void)_continueToNextIdentifier;
-(void)_resetMaxItemListSize;
@end

