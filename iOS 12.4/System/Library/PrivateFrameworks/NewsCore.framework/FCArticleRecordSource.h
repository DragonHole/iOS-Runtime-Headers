/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCArticleRecordSource : FCRecordSource {

	NSArray* _nonLocalizableKeys;
	NSArray* _localizableKeys;

}
+(id)identifierFromCKRecord:(id)arg1 ;
+(BOOL)supportsDeletions;
+(id)canaryRecordName;
+(id)changeTagFromCKRecord:(id)arg1 ;
+(id)modificationDateFromCKRecord:(id)arg1 ;
+(BOOL)useTaggedImages;
-(int)pbRecordType;
-(id)nonLocalizableKeys;
-(id)localizableKeys;
-(id)storeFilename;
-(unsigned long long)storeVersion;
-(unsigned long long)lowThresholdDataSizeLimit;
-(unsigned long long)highThresholdDataSizeLimit;
-(id)recordIDPrefix;
-(id)recordFromCKRecord:(id)arg1 base:(id)arg2 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4 ;
-(id)experimentalizableKeys;
-(id)localizableExperimentalizableKeys;
-(id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2 ;
-(id)saveArticleRecords:(id)arg1 ;
-(id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3 experimentalizableFieldsPostfix:(id)arg4 activeTreatmentID:(id)arg5 ;
-(id)saveFeedItemAndArticleRecords:(id)arg1 ;
-(id)recordType;
@end

