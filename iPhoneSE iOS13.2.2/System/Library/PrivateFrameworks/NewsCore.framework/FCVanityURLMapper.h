/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTPBVanityURLMapping;

@interface FCVanityURLMapper : NSObject {

	NTPBVanityURLMapping* _vanityURLMapping;

}

@property (nonatomic,copy,readonly) NTPBVanityURLMapping * vanityURLMapping;              //@synthesize vanityURLMapping=_vanityURLMapping - In the implementation block
-(id)init;
-(id)initWithVanityURLMapping:(id)arg1 ;
-(id)URLForVanityURL:(id)arg1 ;
-(id)_standardizedInputPathWithPath:(id)arg1 ;
-(NTPBVanityURLMapping *)vanityURLMapping;
-(id)_standardizedMappingPathWithPath:(id)arg1 ;
-(void)_standardizeResultPath:(id)arg1 ;
-(id)_pathWithTrailingForwardSlashWithPath:(id)arg1 ;
@end

