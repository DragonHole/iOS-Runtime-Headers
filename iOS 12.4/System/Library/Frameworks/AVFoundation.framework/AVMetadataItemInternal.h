/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSLocale, NSDate, NSDictionary;

@interface AVMetadataItemInternal : NSObject {

	OpaqueFigMetadataReaderRef reader;
	long long itemIndex;
	NSString* identifier;
	NSString* keySpace;
	id<NSObject><NSCopying> key;
	NSString* commonKey;
	NSLocale* locale;
	NSString* extendedLanguageTag;
	NSString* languageCode;
	id<NSObject><NSCopying> value;
	SCD_Struct_AV5 time;
	SCD_Struct_AV5 duration;
	NSDate* startDate;
	NSDate* discoveryTimestamp;
	NSString* dataType;
	NSDictionary* extras;

}
@end
