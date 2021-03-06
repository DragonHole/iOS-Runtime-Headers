/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ECMappingInfo : NSObject {

	NSString* mSheetName;

}

@property (nonatomic,readonly) NSString * sheetName; 
@property (nonatomic,readonly) int rowOffset; 
@property (nonatomic,readonly) int columnOffset; 
+(id)mappingInfoWithSheetName:(id)arg1 ;
-(int)columnOffset;
-(int)rowOffset;
-(NSString *)sheetName;
-(id)initWithSheetName:(id)arg1 ;
@end

