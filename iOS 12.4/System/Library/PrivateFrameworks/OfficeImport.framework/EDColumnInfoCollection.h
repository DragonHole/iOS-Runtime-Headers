/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDSortedCollection.h>

@class EDResources, EDWorksheet;

@interface EDColumnInfoCollection : EDSortedCollection {

	EDResources* mResources;
	EDWorksheet* mWorksheet;

}
-(id)columnInfoForColumnNumber:(int)arg1 ;
-(id)initWithResources:(id)arg1 worksheet:(id)arg2 ;
-(id)columnInfoCreateIfNilForColumnNumber:(int)arg1 ;
-(void)dealloc;
@end

