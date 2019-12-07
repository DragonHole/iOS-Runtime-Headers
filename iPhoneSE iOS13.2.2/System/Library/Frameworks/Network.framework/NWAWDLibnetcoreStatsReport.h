/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAWDLibnetcoreMbufStatsReport, NWAWDLibnetcoreMPTCPStatsReport, NWAWDLibnetcoreNetworkdStatsReport, NWAWDNWAPIUsage, NSMutableArray, NWAWDLibnetcoreTCPECNStatsReport, NWAWDLibnetcoreTCPStatsReport, NWAWDLibnetcoreTCPTFOStatsReport;

@interface NWAWDLibnetcoreStatsReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NWAWDLibnetcoreMbufStatsReport* _mbufStatisticsReport;
	NWAWDLibnetcoreMPTCPStatsReport* _mptcpStatisticsReport;
	NWAWDLibnetcoreNetworkdStatsReport* _networkdStatisticsReport;
	NWAWDNWAPIUsage* _nwAPIUsageReport;
	unsigned _reportReason;
	NSMutableArray* _tcpECNInterfaceReports;
	NWAWDLibnetcoreTCPECNStatsReport* _tcpECNStatisticsReport;
	NWAWDLibnetcoreTCPStatsReport* _tcpStatisticsReport;
	NWAWDLibnetcoreTCPTFOStatsReport* _tcpTFOStatisticsReport;
	SCD_Struct_NW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasReportReason; 
@property (assign,nonatomic) unsigned reportReason;                                                      //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) BOOL hasMbufStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreMbufStatsReport * mbufStatisticsReport;                      //@synthesize mbufStatisticsReport=_mbufStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPStatsReport * tcpStatisticsReport;                        //@synthesize tcpStatisticsReport=_tcpStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpECNStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPECNStatsReport * tcpECNStatisticsReport;                  //@synthesize tcpECNStatisticsReport=_tcpECNStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasTcpTFOStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreTCPTFOStatsReport * tcpTFOStatisticsReport;                  //@synthesize tcpTFOStatisticsReport=_tcpTFOStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkdStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreNetworkdStatsReport * networkdStatisticsReport;              //@synthesize networkdStatisticsReport=_networkdStatisticsReport - In the implementation block
@property (nonatomic,retain) NSMutableArray * tcpECNInterfaceReports;                                    //@synthesize tcpECNInterfaceReports=_tcpECNInterfaceReports - In the implementation block
@property (nonatomic,readonly) BOOL hasNwAPIUsageReport; 
@property (nonatomic,retain) NWAWDNWAPIUsage * nwAPIUsageReport;                                         //@synthesize nwAPIUsageReport=_nwAPIUsageReport - In the implementation block
@property (nonatomic,readonly) BOOL hasMptcpStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreMPTCPStatsReport * mptcpStatisticsReport;                    //@synthesize mptcpStatisticsReport=_mptcpStatisticsReport - In the implementation block
+(Class)tcpECNInterfaceReportType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setReportReason:(unsigned)arg1 ;
-(void)setHasReportReason:(BOOL)arg1 ;
-(BOOL)hasReportReason;
-(BOOL)hasMbufStatisticsReport;
-(BOOL)hasTcpStatisticsReport;
-(BOOL)hasTcpECNStatisticsReport;
-(BOOL)hasTcpTFOStatisticsReport;
-(BOOL)hasNetworkdStatisticsReport;
-(void)clearTcpECNInterfaceReports;
-(void)addTcpECNInterfaceReport:(id)arg1 ;
-(unsigned long long)tcpECNInterfaceReportsCount;
-(id)tcpECNInterfaceReportAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNwAPIUsageReport;
-(BOOL)hasMptcpStatisticsReport;
-(unsigned)reportReason;
-(NWAWDLibnetcoreMbufStatsReport *)mbufStatisticsReport;
-(void)setMbufStatisticsReport:(NWAWDLibnetcoreMbufStatsReport *)arg1 ;
-(NWAWDLibnetcoreTCPStatsReport *)tcpStatisticsReport;
-(void)setTcpStatisticsReport:(NWAWDLibnetcoreTCPStatsReport *)arg1 ;
-(NWAWDLibnetcoreTCPECNStatsReport *)tcpECNStatisticsReport;
-(void)setTcpECNStatisticsReport:(NWAWDLibnetcoreTCPECNStatsReport *)arg1 ;
-(NWAWDLibnetcoreTCPTFOStatsReport *)tcpTFOStatisticsReport;
-(void)setTcpTFOStatisticsReport:(NWAWDLibnetcoreTCPTFOStatsReport *)arg1 ;
-(NWAWDLibnetcoreNetworkdStatsReport *)networkdStatisticsReport;
-(void)setNetworkdStatisticsReport:(NWAWDLibnetcoreNetworkdStatsReport *)arg1 ;
-(NSMutableArray *)tcpECNInterfaceReports;
-(void)setTcpECNInterfaceReports:(NSMutableArray *)arg1 ;
-(NWAWDNWAPIUsage *)nwAPIUsageReport;
-(void)setNwAPIUsageReport:(NWAWDNWAPIUsage *)arg1 ;
-(NWAWDLibnetcoreMPTCPStatsReport *)mptcpStatisticsReport;
-(void)setMptcpStatisticsReport:(NWAWDLibnetcoreMPTCPStatsReport *)arg1 ;
@end
